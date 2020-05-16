<?php
    include_once './connection.php';
?>
<!doctype html>
<html lang="en">
<head>
    <title>jQuery AJAX Load Data - Programming Fields</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>

    <!-- -------- Font awesome 5 kit -->
    <script src="https://kit.fontawesome.com/44fb44d106.js"></script>    
</head>

<div class="container pt-5">
    <div class="row">
        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 m-auto d-block">
            <table class="table table-striped" id="firstTable">
                <thead class="bg-success text-white" id="firstThead">
                    <th> Team Name </th>
                    <th> To Pay </th>
                    <th> Score 1 </th>
                    <th> Score 2 </th>
                    <th> Score 3 </th>
                    <th> Total dg</th>

                </thead>
                <tbody>
                    <?php
                         $sql                 =       " SELECT * FROM score_all JOIN check_score_round1 ON score_all.team_id_team = check_score_round1.team_id_team";

                         $result              =       mysqli_query($con, $sql);
                         if($result) {
                             $score_all        =     mysqli_fetch_all($result,MYSQLI_ASSOC);
                             foreach($score_all as $score) : ?>
                                <tr id="result">
                                    <td><?php echo $score['team_id_team']; ?> </td>
                                    <td><?php echo $score['check_score_round1']; ?> </td>
                                    <td><?php echo $score['check_score_round2']; ?> </td>
                                    <td><?php echo "sdrfgdrr"; ?> </td>
                                    <td><?php //echo $score['check_score_round3']; ?> </td>
                                                                <!--
                                    <td><?php //echo $score['id_check_score_round3']; ?> </td>
                                    https://github.com/fern-dkm/csyoungcamp.git
                                    <td><?php //echo $score['score3']; ?> </td>
                                    <td><?php// echo $score['score1']+ $score['score2']+ $score['score3']; ?> </td>
                                    -->
                                </tr>
                             <?php endforeach; 
                         }   
                         ?>
                </tbody>
            </table>
        </div>
    </div>

    <div class="row">
        <div class="col-xl-6 col-md-6">
            <button type="button" class="btn btn-info btn-sm" id="loadBtn"><i class="fa fa-refresh"></i> Load More.. </button>
        </div>

    </div>
</div>

<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.3/umd/popper.min.js" integrity="sha384-vFJXuSJphROIrBnz7yo7oB41mKfc8JzQZiCq4NCceLEaO4IHwicKwpJf9c9IpFgh" crossorigin="anonymous"></script>
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-beta.2/js/bootstrap.min.js" integrity="sha384-alpBpkh1PFOepccYVYDB4do5UnbKysX5WZXm3XxPqe5iKTfUKjNkCk9SaVuEZflJ" crossorigin="anonymous"></script>